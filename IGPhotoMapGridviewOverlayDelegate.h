

@protocol IGPhotoMapGridviewOverlayDelegate <NSObject>
@required
-(void)toggleEditMode;
-(char)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)didTapPhoto:(id)arg1;
-(void)didDismissPhotoMapGridView;
-(char)canEditMap;
-(void)submitEditsAndPromptForConfirmation:(char)arg1;
-(void)cancelEditMode;
-(char)isInEditMode;

@end

