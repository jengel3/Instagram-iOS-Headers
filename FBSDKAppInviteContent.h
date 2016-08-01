
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface FBSDKAppInviteContent : NSObject <FBSDKCopying, NSSecureCoding> {

	NSURL* _appInvitePreviewImageURL;
	NSURL* _appLinkURL;
	NSString* _promotionCode;
	NSString* _promotionText;
	unsigned _destination;

}

@property (nonatomic,copy) NSURL * appInvitePreviewImageURL;              //@synthesize appInvitePreviewImageURL=_appInvitePreviewImageURL - In the implementation block
@property (nonatomic,copy) NSURL * appLinkURL;                            //@synthesize appLinkURL=_appLinkURL - In the implementation block
@property (nonatomic,copy) NSURL * previewImageURL; 
@property (nonatomic,copy) NSString * promotionCode;                      //@synthesize promotionCode=_promotionCode - In the implementation block
@property (nonatomic,copy) NSString * promotionText;                      //@synthesize promotionText=_promotionText - In the implementation block
@property (assign) unsigned destination;                                  //@synthesize destination=_destination - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)setAppLinkURL:(NSURL *)arg1 ;
-(NSURL *)appInvitePreviewImageURL;
-(void)setAppInvitePreviewImageURL:(NSURL *)arg1 ;
-(char)isEqualToAppInviteContent:(id)arg1 ;
-(NSURL *)appLinkURL;
-(NSString *)promotionText;
-(NSString *)promotionCode;
-(void)setPromotionCode:(NSString *)arg1 ;
-(void)setPromotionText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)destination;
-(void)setDestination:(unsigned)arg1 ;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(NSURL *)previewImageURL;
@end

