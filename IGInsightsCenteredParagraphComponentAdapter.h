
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class NSString, IGInsightsCenteredParagraphView;

@interface IGInsightsCenteredParagraphComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	NSString* _title;
	NSString* _subtitle;
	IGInsightsCenteredParagraphView* _componentView;

}

@property (nonatomic,copy) NSString * title;                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) IGInsightsCenteredParagraphView * componentView;                                  //@synthesize componentView=_componentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsCenteredParagraphView *)componentView;
-(void)setComponentView:(IGInsightsCenteredParagraphView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end

