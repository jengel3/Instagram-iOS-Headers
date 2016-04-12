
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface IGAlbumSeenItem : NSObject <NSCoding> {

	NSString* _albumPK;
	NSDate* _lastSeen;

}

@property (nonatomic,readonly) NSString * albumPK;              //@synthesize albumPK=_albumPK - In the implementation block
@property (nonatomic,readonly) NSDate * lastSeen;               //@synthesize lastSeen=_lastSeen - In the implementation block
-(NSString *)albumPK;
-(id)initWithAlbumPK:(id)arg1 lastSeen:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastSeen;
@end

