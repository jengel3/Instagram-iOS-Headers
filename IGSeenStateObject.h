
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSMutableSet;

@interface IGSeenStateObject : NSObject <NSCoding, NSCopying> {

	NSMutableOrderedSet* _unseenIDs;
	NSMutableSet* _seenIDs;

}

@property (nonatomic,readonly) NSMutableOrderedSet * unseenIDs;              //@synthesize unseenIDs=_unseenIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * seenIDs;                       //@synthesize seenIDs=_seenIDs - In the implementation block
-(NSMutableSet *)seenIDs;
-(NSMutableOrderedSet *)unseenIDs;
-(id)seenIDsString;
-(id)unseenIDsString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

