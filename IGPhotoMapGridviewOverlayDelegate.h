

@protocol IGPhotoMapGridviewOverlayDelegate <NSObject>
@required
-(void)toggleEditMode;
-(char)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)didDismissPhotoMapGridView;
-(void)submitEditsAndPromptForConfirmation:(char)arg1;
-(void)didTapPhoto:(id)arg1;
-(char)canEditMap;
-(void)cancelEditMode;
-(char)isInEditMode;

@end

