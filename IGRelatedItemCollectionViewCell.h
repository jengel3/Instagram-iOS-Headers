/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface IGRelatedItemCollectionViewCell : UICollectionViewCell {

	UILabel* _textLabel;

}

@property (nonatomic,__weak,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
+(id)cellIdentifier;
-(void)configureWithRelatedItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
@end

