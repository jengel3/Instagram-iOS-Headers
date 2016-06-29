
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FBSDKErrorRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedRecoveryDescription;
	NSArray* _localizedRecoveryOptionDescriptions;
	unsigned _errorCategory;
	NSString* _recoveryActionName;

}

@property (nonatomic,readonly) NSString * localizedRecoveryDescription;                    //@synthesize localizedRecoveryDescription=_localizedRecoveryDescription - In the implementation block
@property (nonatomic,readonly) NSArray * localizedRecoveryOptionDescriptions;              //@synthesize localizedRecoveryOptionDescriptions=_localizedRecoveryOptionDescriptions - In the implementation block
@property (nonatomic,readonly) unsigned errorCategory;                                     //@synthesize errorCategory=_errorCategory - In the implementation block
@property (nonatomic,readonly) NSString * recoveryActionName;                              //@synthesize recoveryActionName=_recoveryActionName - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)errorCategory;
-(NSString *)recoveryActionName;
-(id)initWithRecoveryDescription:(id)arg1 optionDescriptions:(id)arg2 category:(unsigned)arg3 recoveryActionName:(id)arg4 ;
-(NSString *)localizedRecoveryDescription;
-(NSArray *)localizedRecoveryOptionDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

