
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAYMFUserCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFollowAccountListModel, NSArray, NSString;

@interface IGAYMFItemController : IGListItemController <IGAYMFUserCellDelegate, IGListItemType> {

	IGFollowAccountListModel* _followAccountListModel;
	NSArray* _activeAccounts;

}

@property (nonatomic,readonly) IGFollowAccountListModel * followAccountListModel;              //@synthesize followAccountListModel=_followAccountListModel - In the implementation block
@property (nonatomic,readonly) NSArray * activeAccounts;                                       //@synthesize activeAccounts=_activeAccounts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)pushControllerForUser:(id)arg1 ;
-(void)didDismissAYMFUserCell:(id)arg1 ;
-(void)didFollowAYMFUserCell:(id)arg1 ;
-(void)didTapAYMFUserCell:(id)arg1 ;
-(id)initWithFollowAccountListModel:(id)arg1 ;
-(IGFollowAccountListModel *)followAccountListModel;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(NSArray *)activeAccounts;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

