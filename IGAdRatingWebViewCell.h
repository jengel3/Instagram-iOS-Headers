
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBWebView;
@class UIView;

@interface IGAdRatingWebViewCell : UICollectionViewCell {

	UIView*<FBWebView> _webView;

}

@property (assign,nonatomic,__weak) UIView*<FBWebView> webView;              //@synthesize webView=_webView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIView*<FBWebView>)webView;
-(void)setWebView:(UIView*<FBWebView>)arg1 ;
@end

