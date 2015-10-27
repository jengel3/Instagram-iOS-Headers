/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGUserCell.h>
#import <Instagram/IGSimilarAccountsControlDelegate.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>

@class IGSimilarAccountsView, IGSimilarAccountsControl, UIView, NSString;

@interface IGFollowListUserCell : IGUserCell <IGSimilarAccountsControlDelegate, IGSimilarAccountsViewDelegate> {

	IGSimilarAccountsView* _similarAccountsView;
	IGSimilarAccountsControl* _similarAccountsControl;
	/*^block*/id _dismissActionBlock;
	UIView* _bottomLine;

}

@property (nonatomic,retain) IGSimilarAccountsView * similarAccountsView;                    //@synthesize similarAccountsView=_similarAccountsView - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsControl * similarAccountsControl;              //@synthesize similarAccountsControl=_similarAccountsControl - In the implementation block
@property (nonatomic,copy) id dismissActionBlock;                                            //@synthesize dismissActionBlock=_dismissActionBlock - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                            //@synthesize bottomLine=_bottomLine - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)similarAccountsControl:(id)arg1 didReplenishUserAtIndexPath:(id)arg2 ;
-(void)similarAccountsViewDidTapOnClose:(id)arg1 ;
-(IGSimilarAccountsControl *)similarAccountsControl;
-(IGSimilarAccountsView *)similarAccountsView;
-(void)setDismissActionBlock:(id)arg1 ;
-(id)dismissActionBlock;
-(void)configureCellWithUser:(id)arg1 showSimilarAccountsView:(char)arg2 followActionBlock:(/*^block*/id)arg3 dismissActionBlock:(/*^block*/id)arg4 ;
-(void)setSimilarAccountsView:(IGSimilarAccountsView *)arg1 ;
-(void)setSimilarAccountsControl:(IGSimilarAccountsControl *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

