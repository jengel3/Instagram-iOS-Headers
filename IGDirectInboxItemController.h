
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class NSString, IGDirectInboxItemViewModel;

@interface IGDirectInboxItemController : IGListItemController <IGListItemType> {

	NSString* _threadId;
	IGDirectInboxItemViewModel* _viewModel;

}

@property (nonatomic,copy,readonly) NSString * threadId;                            //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) IGDirectInboxItemViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) CGSize itemSize; 
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
-(IGDirectInboxItemViewModel *)viewModel;
-(id)init;
-(unsigned)numberOfItems;
-(CGSize)itemSize;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(NSString *)threadId;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

