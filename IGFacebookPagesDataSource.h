/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGFacebookPagesDataSourceDelegate;
@class FBSDKAccessToken;

@interface IGFacebookPagesDataSource : NSObject {

	id<IGFacebookPagesDataSourceDelegate> _delegate;
	FBSDKAccessToken* _accessToken;

}

@property (assign,nonatomic,__weak) id<IGFacebookPagesDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * accessToken;                                     //@synthesize accessToken=_accessToken - In the implementation block
-(void)parseResults:(id)arg1 ;
-(void)fetchPagesWithFields:(id)arg1 ;
-(void)setDelegate:(id<IGFacebookPagesDataSourceDelegate>)arg1 ;
-(id<IGFacebookPagesDataSourceDelegate>)delegate;
-(void)handleError:(id)arg1 ;
-(FBSDKAccessToken *)accessToken;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
@end
