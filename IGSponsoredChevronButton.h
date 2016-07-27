
#import <Instagram/IGChevronTitleButton.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGSponsorableButton.h>

@protocol IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, IGActionSheetConfiguration, NSMutableDictionary, NSString;

@interface IGSponsoredChevronButton : IGChevronTitleButton <IGActionSheetDelegate, IGSponsorableButton> {

	char _showIcon;
	IGActionSheetConfiguration* _actionSheetConfiguration;
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
@property (nonatomic,retain) IGActionSheetConfiguration * actionSheetConfiguration;                     //@synthesize actionSheetConfiguration=_actionSheetConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
+(id)button;
+(id)chevronImage;
-(IGFeedItem *)feedItem;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)updateAppearance;
-(void)onSponsoredPostLabelTapped;
-(void)setTintedColors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tintedColors;
-(IGActionSheetConfiguration *)actionSheetConfiguration;
-(void)setActionSheetConfiguration:(IGActionSheetConfiguration *)arg1 ;
-(void)setColor:(id)arg1 forState:(unsigned)arg2 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(id)init;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
@end

