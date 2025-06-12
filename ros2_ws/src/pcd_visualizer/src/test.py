import zivid
import os

app = zivid.Application()

# 🔁 Update path to your .zfc file
zfc_path = "/home/hoabip/FileCameraZivid2L100.zfc"
pcd_output = "/home/hoabip/Zivid3D_1.pcd"

# Load the frame from file
frame = zivid.Frame(zfc_path)

# Extract point cloud
point_cloud = frame.point_cloud()

# Save to PCD file
point_cloud.save(pcd_output)

print(f"Saved point cloud to: {pcd_output}")
