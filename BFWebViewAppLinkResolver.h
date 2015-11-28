
#import <Instagram/BFAppLinkResolving.h>

@class NSString;

@interface BFWebViewAppLinkResolver : NSObject <BFAppLinkResolving>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)appLinkFromURLInBackground:(id)arg1 ;
-(id)followRedirects:(id)arg1 ;
-(id)getALDataFromLoadedPage:(id)arg1 ;
-(id)appLinkFromALData:(id)arg1 destination:(id)arg2 ;
-(id)parseALData:(id)arg1 ;
@end

