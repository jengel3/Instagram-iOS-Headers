
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsCenteredParagraphPageView, IGInsightsParagraphComponent, IGInsightsLoggingHelper, NSString;

@interface IGInsightsCenteredParagraphComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsCenteredParagraphPageView* _componentView;
	IGInsightsParagraphComponent* _component;
	IGInsightsLoggingHelper* _loggingHelper;
	unsigned _surface;

}

@property (nonatomic,retain) IGInsightsCenteredParagraphPageView * componentView;                              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsParagraphComponent * component;                                         //@synthesize component=_component - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                          //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (assign,nonatomic) unsigned surface;                                                                 //@synthesize surface=_surface - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(IGInsightsCenteredParagraphPageView *)componentView;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(void)setComponentView:(IGInsightsCenteredParagraphPageView *)arg1 ;
-(void)setSurface:(unsigned)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(unsigned)surface;
-(IGInsightsParagraphComponent *)component;
-(void)setComponent:(IGInsightsParagraphComponent *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end

