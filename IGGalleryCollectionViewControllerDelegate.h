

@protocol IGGalleryCollectionViewControllerDelegate <NSObject>
@required
-(void)galleryCollectionViewControllerDidTapSeeAll:(id)arg1;
-(void)galleryCollectionViewController:(id)arg1 didPickAsset:(id)arg2;
-(void)galleryCollectionViewControllerDidClickDisabledAsset:(id)arg1;

@end

