
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/FBWebViewDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol FBWebView, IGAdRatingWebViewItemControllerDelegate;
@class UIView, NSURLRequest, IGSpinnerCellConfiguration, NSString;

@interface IGAdRatingWebViewItemController : IGListItemController <FBWebViewDelegate, IGListItemType> {

	char _webViewIsLoaded;
	UIView*<FBWebView> _webView;
	NSURLRequest* _webViewRequest;
	id<IGAdRatingWebViewItemControllerDelegate> _delegate;
	IGSpinnerCellConfiguration* _spinnerCellConfiguration;

}

@property (nonatomic,readonly) UIView*<FBWebView> webView;                                               //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSURLRequest * webViewRequest;                                              //@synthesize webViewRequest=_webViewRequest - In the implementation block
@property (assign,nonatomic) char webViewIsLoaded;                                                       //@synthesize webViewIsLoaded=_webViewIsLoaded - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAdRatingWebViewItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGSpinnerCellConfiguration * spinnerCellConfiguration;                    //@synthesize spinnerCellConfiguration=_spinnerCellConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(id)workingRangeDelegate;
-(id)initWithWebViewItemControllerDelegate:(id)arg1 ;
-(char)webViewIsLoaded;
-(IGSpinnerCellConfiguration *)spinnerCellConfiguration;
-(NSURLRequest *)webViewRequest;
-(void)setWebViewRequest:(NSURLRequest *)arg1 ;
-(void)setWebViewIsLoaded:(char)arg1 ;
-(char)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(int)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)webViewBlockingResourcesLoaded:(id)arg1 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id<IGAdRatingWebViewItemControllerDelegate>)delegate;
-(UIView*<FBWebView>)webView;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(void)webViewDidFinishLoading:(id)arg1 ;
@end

