
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSNumber, NSString;

@interface IGIOSLink : NSObject <NSCoding> {

	NSURL* _deeplinkUri;
	NSURL* _webUri;
	NSURL* _redirectUri;
	NSNumber* _contentId;
	NSString* _callToActionTitle;
	int _linkType;

}

@property (nonatomic,readonly) NSURL * deeplinkUri;                       //@synthesize deeplinkUri=_deeplinkUri - In the implementation block
@property (nonatomic,readonly) NSURL * webUri;                            //@synthesize webUri=_webUri - In the implementation block
@property (nonatomic,readonly) NSURL * redirectUri;                       //@synthesize redirectUri=_redirectUri - In the implementation block
@property (nonatomic,readonly) NSNumber * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) NSString * callToActionTitle;              //@synthesize callToActionTitle=_callToActionTitle - In the implementation block
@property (nonatomic,readonly) int linkType;                              //@synthesize linkType=_linkType - In the implementation block
-(NSURL *)deeplinkUri;
-(NSURL *)webUri;
-(NSURL *)redirectUri;
-(char)isEqualToIOSLink:(id)arg1 ;
-(NSString *)callToActionTitle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)contentId;
-(int)linkType;
@end

