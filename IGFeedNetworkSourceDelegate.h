/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:00 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGFeedNetworkSourceDelegate <NSObject>
@optional
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
-(void)feedNetworkSource:(id)arg1 willAddObjects:(id)arg2 updateObjects:(id)arg3;
-(id)rankTokenForFeedNetworkSource:(id)arg1;

@end

