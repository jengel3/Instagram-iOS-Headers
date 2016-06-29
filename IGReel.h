
#import <Instagram/IGStorableObject.h>

@class IGUser, NSArray;

@interface IGReel : IGStorableObject {

	IGUser* _user;
	NSArray* _items;

}

@property (nonatomic,readonly) IGUser * user;                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(id)centralizedStore;
+(id)pkFromDict:(id)arg1 ;
-(IGUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(char)updateWithDictionary:(id)arg1 ;
@end

