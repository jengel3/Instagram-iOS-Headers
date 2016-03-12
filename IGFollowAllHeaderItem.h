
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGFollowAllHeaderItem : NSObject <IGDKDiffable> {

	int _type;
	NSArray* _userIDs;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userIDs;              //@synthesize userIDs=_userIDs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diffIdentifier;
-(id)initWithType:(int)arg1 userIDs:(id)arg2 ;
-(NSArray *)userIDs;
-(int)type;
@end

