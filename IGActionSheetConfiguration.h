

@class UIView, NSArray;

@interface IGActionSheetConfiguration : NSObject {

	UIView* _headerView;
	NSArray* _buttons;

}

@property (nonatomic,readonly) UIView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) NSArray * buttons;                //@synthesize buttons=_buttons - In the implementation block
+(id)standardConfigurationForFeedItem:(id)arg1 allowHidingPost:(char)arg2 showTimestamp:(char)arg3 ;
+(id)standardAdConfigurationForFeedItem:(id)arg1 ;
+(char)websiteLinkAvailableForFeedItem:(id)arg1 ;
-(id)initWithHeaderView:(id)arg1 buttons:(id)arg2 ;
-(UIView *)headerView;
-(NSArray *)buttons;
@end

