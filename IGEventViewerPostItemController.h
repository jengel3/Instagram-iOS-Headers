
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate;
@class IGPost, NSString;

@interface IGEventViewerPostItemController : IGListItemController <IGListItemType> {

	IGPost* _post;
	id<IGEventViewerMediaCellDelegate> _mediaCellDelegate;
	id<IGEventViewerAttributionHeaderCellDelegate> _headerCellDelegate;

}

@property (nonatomic,readonly) IGPost * post;                                                                         //@synthesize post=_post - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerMediaCellDelegate> mediaCellDelegate;                           //@synthesize mediaCellDelegate=_mediaCellDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerAttributionHeaderCellDelegate> headerCellDelegate;              //@synthesize headerCellDelegate=_headerCellDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(IGPost *)post;
-(id<IGEventViewerAttributionHeaderCellDelegate>)headerCellDelegate;
-(id<IGEventViewerMediaCellDelegate>)mediaCellDelegate;
-(id)initWithHeaderCellDelegate:(id)arg1 mediaCellDelegate:(id)arg2 ;
-(id)headerCellAtIndex:(int)arg1 ;
-(id)mediaCellAtIndex:(int)arg1 ;
-(CGSize)headerCellSize;
-(CGSize)mediaCellSize;
-(Class)cellClassForPostMediaType:(int)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

