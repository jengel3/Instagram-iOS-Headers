/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:51 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSpringButton.h>

@class IGUser;

@interface IGFavoriteButton : IGSpringButton {

	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(void)onFavoriteTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)sizeToFit;
-(void)setHighlighted:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)updateState;
@end

