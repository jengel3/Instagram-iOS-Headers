

@protocol IGInlineGalleryDataSource
@property (assign,nonatomic,__weak) id<IGInlineGalleryDataSourceDelegate> delegate; 
@required
-(int)numMediaSince:(double)arg1;
-(char)hasCameraRollAccess;
-(void)pauseDataFetch;
-(void)startDataFetchWithCompletion:(/*^block*/id)arg1;
-(void)decorateGridCell:(id)arg1 forAssetAtIndexPath:(id)arg2;
-(id)errorMessageIfInvalidAssetAtIndexPath:(id)arg1;
-(id)metadataForAssetAtIndexPath:(id)arg1;
-(void)setThumbnailSize:(CGSize)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGInlineGalleryDataSourceDelegate>)delegate;
-(int)numberOfItems;

@end

