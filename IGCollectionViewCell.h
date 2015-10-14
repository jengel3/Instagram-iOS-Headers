/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, IGKVOHandle;

@interface IGCollectionViewCell : UICollectionViewCell {

	char _enabled;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _accessoryView;
	int _selectionStyle;
	IGKVOHandle* _textLabelObserver;
	IGKVOHandle* _detailTextLabelObserver;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                          //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) int selectionStyle;                                 //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) char enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) IGKVOHandle * textLabelObserver;                    //@synthesize textLabelObserver=_textLabelObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * detailTextLabelObserver;              //@synthesize detailTextLabelObserver=_detailTextLabelObserver - In the implementation block
-(id)initWithFrame:(CGRect)arg1 displayBorder:(char)arg2 ;
-(void)setTextLabelObserver:(IGKVOHandle *)arg1 ;
-(void)setDetailTextLabelObserver:(IGKVOHandle *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(IGKVOHandle *)textLabelObserver;
-(IGKVOHandle *)detailTextLabelObserver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIImageView *)imageView;
-(char)enabled;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

