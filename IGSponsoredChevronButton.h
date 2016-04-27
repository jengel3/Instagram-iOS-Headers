
#import <Instagram/IGChevronTitleButton.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGSponsorableButton.h>

@protocol IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, NSMutableDictionary, NSString;

@interface IGSponsoredChevronButton : IGChevronTitleButton <IGActionSheetDelegate, IGSponsorableButton> {

	char _showIcon;
	IGFeedItem* _feedItem;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	NSMutableDictionary* _tintedColors;

}

@property (nonatomic,retain) NSMutableDictionary * tintedColors;                                        //@synthesize tintedColors=_tintedColors - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char showIcon;                                                             //@synthesize showIcon=_showIcon - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
+(id)button;
+(id)chevronImage;
-(IGFeedItem *)feedItem;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)onSponsoredPostLabelTapped;
-(void)setTintedColors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tintedColors;
-(void)updateAppearance;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setColor:(id)arg1 forState:(unsigned)arg2 ;
-(id)init;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
@end

