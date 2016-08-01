
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGChannelHomeRowItemModel, NSMutableArray, NSString;

@interface IGChannelHomeRowItemController : IGListItemController <IGListItemType> {

	IGChannelHomeRowItemModel* _item;
	NSMutableArray* _feedDataCaches;
	id<IGEventViewerViewControllerDelegate> _viewerDelegate;

}

@property (nonatomic,readonly) IGChannelHomeRowItemModel * item;                                           //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSMutableArray * feedDataCaches;                                            //@synthesize feedDataCaches=_feedDataCaches - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerViewControllerDelegate> viewerDelegate;              //@synthesize viewerDelegate=_viewerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id<IGEventViewerViewControllerDelegate>)viewerDelegate;
-(id)initWithViewerDelegate:(id)arg1 ;
-(NSMutableArray *)feedDataCaches;
-(IGChannelHomeRowItemModel *)item;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

