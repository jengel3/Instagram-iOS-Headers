
#import <Instagram/IGListAdapterDataSource.h>

@protocol IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate, IGUFIButtonBarViewDelegate;
@class IGEventViewerAnalyticsLogger, NSMutableArray, IGSpinnerModel, NSString;

@interface IGEventViewerDataSource : NSObject <IGListAdapterDataSource> {

	char _isSpinnerHidden;
	id<IGEventViewerMediaCellDelegate> _mediaCellDelegate;
	id<IGEventViewerAttributionHeaderCellDelegate> _headerCellDelegate;
	id<IGUFIButtonBarViewDelegate> _ufiButtonsDelegate;
	IGEventViewerAnalyticsLogger* _logger;
	NSMutableArray* _posts;
	IGSpinnerModel* _spinner;

}

@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableArray * posts;                                                                //@synthesize posts=_posts - In the implementation block
@property (nonatomic,readonly) IGSpinnerModel * spinner;                                                            //@synthesize spinner=_spinner - In the implementation block
@property (assign,setter=setSpinnerHidden:,nonatomic) char isSpinnerHidden;                                         //@synthesize isSpinnerHidden=_isSpinnerHidden - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> mediaCellDelegate;                           //@synthesize mediaCellDelegate=_mediaCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerAttributionHeaderCellDelegate> headerCellDelegate;              //@synthesize headerCellDelegate=_headerCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUFIButtonBarViewDelegate> ufiButtonsDelegate;                              //@synthesize ufiButtonsDelegate=_ufiButtonsDelegate - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(NSMutableArray *)posts;
-(id)allPosts;
-(char)isSpinnerHidden;
-(id<IGEventViewerAttributionHeaderCellDelegate>)headerCellDelegate;
-(id<IGEventViewerMediaCellDelegate>)mediaCellDelegate;
-(id<IGUFIButtonBarViewDelegate>)ufiButtonsDelegate;
-(id)initWithPosts:(id)arg1 logger:(id)arg2 ;
-(void)appendPosts:(id)arg1 ;
-(void)replacePostsWithPosts:(id)arg1 ;
-(void)deletePostAtIndexPath:(id)arg1 ;
-(id)postAtIndexPath:(id)arg1 ;
-(id)indexPathForPost:(id)arg1 ;
-(void)setMediaCellDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(void)setHeaderCellDelegate:(id<IGEventViewerAttributionHeaderCellDelegate>)arg1 ;
-(void)setUfiButtonsDelegate:(id<IGUFIButtonBarViewDelegate>)arg1 ;
-(void)setPosts:(NSMutableArray *)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(unsigned)count;
-(void)setSpinnerHidden:(char)arg1 ;
-(IGSpinnerModel *)spinner;
@end

