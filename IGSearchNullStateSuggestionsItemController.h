
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGSearchResultCollectionViewCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class NSArray, NSString;

@interface IGSearchNullStateSuggestionsItemController : IGListItemController <IGSearchResultCollectionViewCellDelegate, IGListItemType> {

	NSArray* _users;

}

@property (nonatomic,retain) NSArray * users;                       //@synthesize users=_users - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)longPress:(id)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

