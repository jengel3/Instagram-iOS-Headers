
#import <Instagram/IGDKDiffable.h>

@class NSArray;

@interface IGFollowAllHeaderItem : NSObject <IGDKDiffable> {

	int _type;
	NSArray* _userIDs;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userIDs;              //@synthesize userIDs=_userIDs - In the implementation block
-(id)diffIdentifier;
-(id)initWithType:(int)arg1 userIDs:(id)arg2 ;
-(NSArray *)userIDs;
-(int)type;
@end

