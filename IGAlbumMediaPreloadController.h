

@protocol IGAlbumItemType;
@class IGImagePreparer, UIImage;

@interface IGAlbumMediaPreloadController : NSObject {

	IGImagePreparer* _imagePreparer;
	UIImage* _previousItemImage;
	UIImage* _nextItemImage;
	id<IGAlbumItemType> _currentItem;

}

@property (nonatomic,readonly) IGImagePreparer * imagePreparer;              //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (nonatomic,retain) UIImage * previousItemImage;                    //@synthesize previousItemImage=_previousItemImage - In the implementation block
@property (nonatomic,retain) UIImage * nextItemImage;                        //@synthesize nextItemImage=_nextItemImage - In the implementation block
@property (nonatomic,retain) id<IGAlbumItemType> currentItem;                //@synthesize currentItem=_currentItem - In the implementation block
-(void)preloadForItems:(id)arg1 currentItem:(id)arg2 width:(float)arg3 ;
-(void)setPreviousItemImage:(UIImage *)arg1 ;
-(void)setNextItemImage:(UIImage *)arg1 ;
-(UIImage *)previousItemImage;
-(UIImage *)nextItemImage;
-(IGImagePreparer *)imagePreparer;
-(id)init;
-(void)setCurrentItem:(id<IGAlbumItemType>)arg1 ;
-(id<IGAlbumItemType>)currentItem;
@end

