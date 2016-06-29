

@protocol IGGridViewControllerDelegate <NSObject>
@optional
-(void)gridViewController:(id)arg1 didClickDisabledAsset:(id)arg2;
-(char)gridViewController:(id)arg1 isAssetLoadedInPlayer:(id)arg2;
-(void)gridViewController:(id)arg1 didDeselectAsset:(id)arg2 atIndexPath:(id)arg3;
-(void)gridViewControllerDidTapEditDrafts:(id)arg1;
-(void)gridViewController:(id)arg1 firstAssetDidChange:(id)arg2;

@required
-(void)gridViewControllerLibraryDidLoad:(id)arg1;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2;

@end

