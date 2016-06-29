

@protocol UIImagePickerControllerDelegate <NSObject>
@optional
-(void)imagePickerControllerDidCancel:(id)arg1;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
-(void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;

@end

