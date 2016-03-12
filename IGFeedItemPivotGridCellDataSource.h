

@class NSArray, NSIndexSet;

@interface IGFeedItemPivotGridCellDataSource : NSObject {

	int _visibleItemsInGrid;
	NSArray* _pivots;
	char _shouldPaddingBottom;
	NSArray* _imageURLs;
	float _imageWidth;
	NSIndexSet* _videoIndexSet;

}

@property (nonatomic,readonly) NSArray * imageURLs;                     //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,readonly) float imageWidth;                        //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,readonly) NSIndexSet * videoIndexSet;              //@synthesize videoIndexSet=_videoIndexSet - In the implementation block
@property (assign,nonatomic) char shouldPaddingBottom;                  //@synthesize shouldPaddingBottom=_shouldPaddingBottom - In the implementation block
+(int)placeholderItemNum;
-(id)initWithPivots:(id)arg1 imageWidth:(float)arg2 shouldExpand:(char)arg3 ;
-(void)setShouldPaddingBottom:(char)arg1 ;
-(NSArray *)imageURLs;
-(void)showMoreItems;
-(char)moreItemAvailable;
-(NSIndexSet *)videoIndexSet;
-(char)shouldPaddingBottom;
-(int)visibleItems;
-(float)imageWidth;
@end

