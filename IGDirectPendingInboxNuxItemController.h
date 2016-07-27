
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGDirectPendingInboxNuxViewModel, IGSeparatorSupplementaryViewSource, NSString;

@interface IGDirectPendingInboxNuxItemController : IGListItemController <IGListItemType> {

	IGDirectPendingInboxNuxViewModel* _viewModel;
	IGSeparatorSupplementaryViewSource* _separatorViewSource;

}

@property (nonatomic,readonly) IGDirectPendingInboxNuxViewModel * viewModel;                        //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) IGSeparatorSupplementaryViewSource * separatorViewSource;              //@synthesize separatorViewSource=_separatorViewSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGSeparatorSupplementaryViewSource *)separatorViewSource;
-(void)setSeparatorViewSource:(IGSeparatorSupplementaryViewSource *)arg1 ;
-(IGDirectPendingInboxNuxViewModel *)viewModel;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

