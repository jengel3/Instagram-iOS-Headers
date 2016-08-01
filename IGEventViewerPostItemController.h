
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate, IGUFIButtonBarViewDelegate;
@class IGEventViewerAnalyticsLogger, IGFeedItem, NSString;

@interface IGEventViewerPostItemController : IGListItemController <IGListItemType> {

	IGEventViewerAnalyticsLogger* _logger;
	IGFeedItem* _post;
	id<IGEventViewerMediaCellDelegate> _mediaCellDelegate;
	id<IGEventViewerAttributionHeaderCellDelegate> _headerCellDelegate;
	id<IGUFIButtonBarViewDelegate> _ufiButtonsDelegate;

}

@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGFeedItem * post;                                                                     //@synthesize post=_post - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerMediaCellDelegate> mediaCellDelegate;                           //@synthesize mediaCellDelegate=_mediaCellDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerAttributionHeaderCellDelegate> headerCellDelegate;              //@synthesize headerCellDelegate=_headerCellDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGUFIButtonBarViewDelegate> ufiButtonsDelegate;                              //@synthesize ufiButtonsDelegate=_ufiButtonsDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)post;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id<IGEventViewerAttributionHeaderCellDelegate>)headerCellDelegate;
-(id<IGEventViewerMediaCellDelegate>)mediaCellDelegate;
-(id<IGUFIButtonBarViewDelegate>)ufiButtonsDelegate;
-(id)initWithHeaderCellDelegate:(id)arg1 mediaCellDelegate:(id)arg2 ufiButtonsDelegate:(id)arg3 logger:(id)arg4 ;
-(id)headerCellAtIndex:(int)arg1 ;
-(id)mediaCellAtIndex:(int)arg1 ;
-(id)actionCellAtIndex:(int)arg1 ;
-(CGSize)headerCellSize;
-(CGSize)mediaCellSize;
-(CGSize)actionCellSize;
-(Class)cellClassForPostMediaType:(int)arg1 ;
-(char)isHeightConstrainedForMediaCellForPost:(id)arg1 ;
-(float)mediaCellMaxHeight;
-(IGEventViewerAnalyticsLogger *)logger;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

