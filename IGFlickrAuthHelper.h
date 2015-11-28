
#import <UIKit/UIWebViewDelegate.h>

@protocol IGFlickrAuthDelegate;
@class UIWebView, NSString;

@interface IGFlickrAuthHelper : NSObject <UIWebViewDelegate> {

	int _currentState;
	id<IGFlickrAuthDelegate> _delegate;
	UIWebView* _webView;
	NSString* _token;
	NSString* _tokenSecret;
	NSString* _username;

}

@property (assign,nonatomic,__weak) id<IGFlickrAuthDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * token;                                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * tokenSecret;                                  //@synthesize tokenSecret=_tokenSecret - In the implementation block
@property (nonatomic,copy) NSString * username;                                     //@synthesize username=_username - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sortedURLStringFromDictionary:(id)arg1 urlEscape:(char)arg2 ;
-(id)oauthSignatureFor:(id)arg1 withKey:(id)arg2 ;
-(void)performOAuthRequestWithURL:(id)arg1 ;
-(void)handleRequestTokenResponse:(id)arg1 ;
-(void)handleAccessTokenResponse:(id)arg1 ;
-(id)extractVerifierFromURL:(id)arg1 ;
-(void)handleCallbackURL:(id)arg1 ;
-(void)startAuthorization;
-(void)setDelegate:(id<IGFlickrAuthDelegate>)arg1 ;
-(id)init;
-(id<IGFlickrAuthDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)tokenSecret;
-(void)setTokenSecret:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

