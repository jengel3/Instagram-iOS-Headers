
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _mutableEvents;
	char _containsExplicitEvent;
	unsigned _numSkipped;
	NSString* _tokenString;
	NSString* _appID;

}

@property (copy,readonly) NSArray * events; 
@property (readonly) unsigned numSkipped;                      //@synthesize numSkipped=_numSkipped - In the implementation block
@property (copy,readonly) NSString * tokenString;              //@synthesize tokenString=_tokenString - In the implementation block
@property (copy,readonly) NSString * appID;                    //@synthesize appID=_appID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithToken:(id)arg1 appID:(id)arg2 ;
-(char)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2 ;
-(void)addEventsFromAppEventState:(id)arg1 ;
-(void)addEvent:(id)arg1 isImplicit:(char)arg2 ;
-(char)areAllEventsImplicit;
-(char)isCompatibleWithAppEventsState:(id)arg1 ;
-(id)JSONStringForEvents:(char)arg1 ;
-(unsigned)numSkipped;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)events;
-(NSString *)tokenString;
-(NSString *)appID;
@end

