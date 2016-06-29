
#import <Instagram/IGDKDiffable.h>

@class NSArray, IGUser, IGFeedItem, NSDate;

@interface IGReelSubscriptionTrayItemModel : NSObject <IGDKDiffable> {

	char _seen;
	NSArray* _items;
	IGUser* _user;
	IGFeedItem* _currentItem;

}

@property (nonatomic,readonly) NSArray * items;                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGFeedItem * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) char seen;                             //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) NSDate * lastTakenDate; 
-(id)diffIdentifier;
-(id)initWithReel:(id)arg1 ;
-(char)seen;
-(NSDate *)lastTakenDate;
-(IGUser *)user;
-(char)isEqual:(id)arg1 ;
-(NSArray *)items;
-(IGFeedItem *)currentItem;
-(void)preload;
@end

