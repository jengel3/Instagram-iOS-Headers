

@protocol IGPhotoMapGridviewOverlayDelegate <NSObject>
@required
-(char)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)toggleEditMode;
-(void)didDismissPhotoMapGridView;
-(void)submitEditsAndPromptForConfirmation:(char)arg1;
-(void)didTapPhoto:(id)arg1;
-(char)canEditMap;
-(void)cancelEditMode;
-(char)isInEditMode;

@end

