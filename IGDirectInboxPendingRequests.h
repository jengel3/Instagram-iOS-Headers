
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDKDiffable.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface IGDirectInboxPendingRequests : NSObject <IGDKDiffable, NSCoding, NSCopying> {

	NSArray* _users;
	int _count;

}

@property (nonatomic,copy,readonly) NSArray * users;              //@synthesize users=_users - In the implementation block
@property (nonatomic,readonly) int count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) char isEmpty; 
-(id)diffIdentifier;
-(id)initWithUsers:(id)arg1 count:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(NSArray *)users;
@end

