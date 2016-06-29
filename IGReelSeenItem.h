
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface IGReelSeenItem : NSObject <NSCoding> {

	NSString* _reelPK;
	NSDate* _lastSeen;

}

@property (nonatomic,readonly) NSString * reelPK;              //@synthesize reelPK=_reelPK - In the implementation block
@property (nonatomic,readonly) NSDate * lastSeen;              //@synthesize lastSeen=_lastSeen - In the implementation block
-(NSString *)reelPK;
-(id)initWithReelPK:(id)arg1 lastSeen:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastSeen;
@end

