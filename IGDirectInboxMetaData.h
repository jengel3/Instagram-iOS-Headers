
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, IGGenericMegaphone;

@interface IGDirectInboxMetaData : NSObject <NSCoding, NSCopying> {

	NSString* _oldestCursor;
	int _unseenShareCount;
	NSDate* _unseenShareTimeStamp;
	IGGenericMegaphone* _megaphone;

}

@property (nonatomic,copy,readonly) NSString * oldestCursor;                //@synthesize oldestCursor=_oldestCursor - In the implementation block
@property (nonatomic,readonly) int unseenShareCount;                        //@synthesize unseenShareCount=_unseenShareCount - In the implementation block
@property (nonatomic,readonly) NSDate * unseenShareTimeStamp;               //@synthesize unseenShareTimeStamp=_unseenShareTimeStamp - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphone * megaphone;              //@synthesize megaphone=_megaphone - In the implementation block
-(NSString *)oldestCursor;
-(int)unseenShareCount;
-(NSDate *)unseenShareTimeStamp;
-(IGGenericMegaphone *)megaphone;
-(id)initWithOldestCursor:(id)arg1 unseenShareCount:(int)arg2 unseenShareTimeStamp:(id)arg3 megaphone:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

