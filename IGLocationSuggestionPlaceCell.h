/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, IGLocation, UIImageView, UILabel;

@interface IGLocationSuggestionPlaceCell : UICollectionViewCell {

	NSString* _locationTitle;
	IGLocation* _location;
	UIImageView* _imageView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) NSString * locationTitle;              //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,retain) IGLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
+(id)cellFont;
-(void)setLocationTitle:(NSString *)arg1 ;
-(NSString *)locationTitle;
-(id)cellBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)textLabel;
-(id)textColor;
-(UIImageView *)imageView;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

