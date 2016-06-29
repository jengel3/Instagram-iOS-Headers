

@protocol IGAlbumCreationViewControllerDataDelegate <NSObject>
@required
-(void)creationViewController:(id)arg1 didPickAsset:(id)arg2 forAlbumModel:(id)arg3;
-(id)creationViewController:(id)arg1 didUpdateTitle:(id)arg2 forAlbumModel:(id)arg3;
-(id)creationViewController:(id)arg1 didUpdateItemText:(id)arg2 position:(float)arg3 forAlbumModel:(id)arg4;

@end

