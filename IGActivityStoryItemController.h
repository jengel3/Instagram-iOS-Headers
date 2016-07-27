
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGNewsFallbackCellViewDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGNewsBaseCellViewDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGActivityStoryItemControllerDelegate;
@class IGLabelSupplementaryViewSource, IGActivityStoryItemConfiguration, NSString;

@interface IGActivityStoryItemController : IGListItemController <IGNewsFallbackCellViewDelegate, IGRaindropAnalyticsDelegate, IGNewsBaseCellViewDelegate, IGListItemType> {

	IGLabelSupplementaryViewSource* _headerViewSource;
	id<IGActivityStoryItemControllerDelegate> _delegate;
	IGActivityStoryItemConfiguration* _itemConfiguration;
	float _fallbackHeight;

}

@property (nonatomic,readonly) IGActivityStoryItemConfiguration * itemConfiguration;                 //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (assign,nonatomic) float fallbackHeight;                                                   //@synthesize fallbackHeight=_fallbackHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IGActivityStoryItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(IGActivityStoryItemConfiguration *)itemConfiguration;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)newsFallbackCellView:(id)arg1 didCalculateHeight:(float)arg2 ;
-(void)newsCellView:(id)arg1 openURL:(id)arg2 ;
-(id)headerViewSource;
-(float)fallbackHeight;
-(void)setFallbackHeight:(float)arg1 ;
-(void)setDelegate:(id<IGActivityStoryItemControllerDelegate>)arg1 ;
-(id)init;
-(id<IGActivityStoryItemControllerDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

