SUMMARY = "My custom Linux image."

require recipes-st/images/st-image-weston.bb

# Include our custom application
IMAGE_INSTALL += "gettemp"
