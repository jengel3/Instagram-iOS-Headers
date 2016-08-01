
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface IGDirectResponseInfo : NSObject <NSCoding> {

	char _forceOverlay;
	NSString* _actionText;
	int _actionHandler;
	NSString* _actionName;
	NSArray* _appUrls;
	NSArray* _iosLinks;
	NSString* _overlayText;
	NSString* _overlayTitle;
	NSString* _overlaySubtitle;

}

@property (nonatomic,copy,readonly) NSString * actionText;                   //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,readonly) int actionHandler;                            //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionName;                   //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appUrls;                       //@synthesize appUrls=_appUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iosLinks;                      //@synthesize iosLinks=_iosLinks - In the implementation block
@property (nonatomic,readonly) char forceOverlay;                            //@synthesize forceOverlay=_forceOverlay - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlayText;                  //@synthesize overlayText=_overlayText - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlayTitle;                 //@synthesize overlayTitle=_overlayTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlaySubtitle;              //@synthesize overlaySubtitle=_overlaySubtitle - In the implementation block
+(char)hasDirectResponseInfo:(id)arg1 ;
-(NSString *)overlayText;
-(NSString *)actionText;
-(char)supportsCTA;
-(NSArray *)iosLinks;
-(NSString *)overlaySubtitle;
-(NSArray *)appUrls;
-(char)isEqualToDirectResponseInfo:(id)arg1 ;
-(char)forceOverlay;
-(NSString *)overlayTitle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)actionName;
-(int)actionHandler;
@end

