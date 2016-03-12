
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGFollowAllUsersCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFollowAllHeaderItem, NSString;

@interface IGFollowAllHeaderItemController : IGListItemController <IGFollowAllUsersCellDelegate, IGListItemType> {

	char _followAllButtonEnabled;
	IGFollowAllHeaderItem* _followAllHeaderItem;

}

@property (nonatomic,readonly) IGFollowAllHeaderItem * followAllHeaderItem;              //@synthesize followAllHeaderItem=_followAllHeaderItem - In the implementation block
@property (assign,nonatomic) char followAllButtonEnabled;                                //@synthesize followAllButtonEnabled=_followAllButtonEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFollowAllHeaderItem *)followAllHeaderItem;
-(id)initWithFollowAllHeaderItem:(id)arg1 ;
-(char)followAllButtonEnabled;
-(void)setFollowAllButtonEnabled:(char)arg1 ;
-(void)followAllUsersOnServer;
-(void)followAllUsersCellDidTapFollowAll:(id)arg1 ;
-(Class)cellClass;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

