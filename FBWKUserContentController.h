
#import <WebKit/WKUserContentController.h>

@class NSMutableDictionary;

@interface FBWKUserContentController : WKUserContentController {

	NSMutableDictionary* _userScripts;

}
-(void)_resetUserScripts;
-(void)addUserScript:(id)arg1 name:(id)arg2 ;
-(void)removeUserScriptForName:(id)arg1 ;
-(id)init;
@end

